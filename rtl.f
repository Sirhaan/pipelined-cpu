# Include directories
+incdir+./rtl/include/

# Core
./rtl/core/ALU.sv
./rtl/core/Decoder.sv
./rtl/core/RF.sv
./rtl/core/FU.sv
./rtl/core/HDU.sv
./rtl/core/pipelinedCpu.sv
./rtl/core/ControlUnit.sv
./rtl/core/PC.sv

# Cache
./rtl/cache/dcache/dcache.sv
./rtl/cache/dcache/dcacheController.sv
./rtl/cache/icache/icache.sv
./rtl/cache/icache/icacheController.sv
./rtl/cache/replacement/TPLRU.sv
./rtl/cache/replacement/BPLRU.sv

# Memory
./rtl/memory/UMEM.sv
./rtl/memory/MemoryArbitrator.sv

# Testbench
#./tb/functionalTB.sv
./tb/performanceCounter.sv
./tb/performanceTB.sv