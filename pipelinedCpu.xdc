# Pipelined CPU top-level constraints
create_clock -period 10.000 -name clk -waveform {0.000 5.000} [get_ports clk]

# Debug outputs are optional; keep them as virtual I/O for timing analysis
set_output_delay -clock clk -max 1.000 [get_ports debug_pc[*]]
set_output_delay -clock clk -min 0.500 [get_ports debug_pc[*]]
set_output_delay -clock clk -max 1.000 [get_ports debug_reg28[*]]
set_output_delay -clock clk -min 0.500 [get_ports debug_reg28[*]]
