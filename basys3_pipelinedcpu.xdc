# Basys 3 pin mapping for pipelinedCpu_top

# Clock
set_property PACKAGE_PIN W5 [get_ports clk]
set_property IOSTANDARD LVCMOS33 [get_ports clk]
create_clock -period 10.000 -name clk -waveform {0.000 5.000} [get_ports clk]

# Reset
set_property PACKAGE_PIN U18 [get_ports rst]
set_property IOSTANDARD LVCMOS33 [get_ports rst]

# Debug outputs (optional; use LEDs or PMOD if available)
set_property PACKAGE_PIN E17 [get_ports debug_pc[0]]
set_property IOSTANDARD LVCMOS33 [get_ports debug_pc[0]]
set_property PACKAGE_PIN E18 [get_ports debug_pc[1]]
set_property IOSTANDARD LVCMOS33 [get_ports debug_pc[1]]

# NOTE: Add further debug pin mappings as needed if you want to route more bits out.
