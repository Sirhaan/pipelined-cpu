module SaturatingCounter (
    input logic clk, rst,
    input logic  taken,
     input logic update_en,
    output logic  predict
);
  
typedef enum logic [1:0] {
    STRONG_NOT_TAKEN = 2'b00,
    WEAK_NOT_TAKEN   = 2'b01,
    WEAK_TAKEN       = 2'b10,
    STRONG_TAKEN     = 2'b11
} state_t;
 
state_t state , new_state;

always_comb begin
    case (state)
        STRONG_NOT_TAKEN: new_state = taken ? WEAK_NOT_TAKEN : STRONG_NOT_TAKEN;
        WEAK_NOT_TAKEN:   new_state = taken ? WEAK_TAKEN : STRONG_NOT_TAKEN;
        WEAK_TAKEN:       new_state = taken ? STRONG_TAKEN : WEAK_NOT_TAKEN;
        STRONG_TAKEN:     new_state = taken ? STRONG_TAKEN : WEAK_TAKEN;
        default:          new_state = STRONG_NOT_TAKEN;
    endcase
end

always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        state <= STRONG_NOT_TAKEN;
    end else if(update_en) begin
        state <= new_state;
    end
end

assign predict = state[1];
endmodule