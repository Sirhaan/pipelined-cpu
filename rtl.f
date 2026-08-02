# Include directories
+incdir+./rtl/include/

# Package definitions
./rtl/include/pkg.sv

# Core
./rtl/core/ALU.sv
./rtl/core/Decoder.sv
./rtl/core/RF.sv
./rtl/core/FU.sv
./rtl/core/HDU.sv
./rtl/core/pipelinedCpu.sv
./rtl/core/ControlUnit.sv
./rtl/core/PC.sv
./rtl/core/ImmGen.sv
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
#branch predictor 
./rtl/branchPredictor/branchPredictor.sv
./rtl/branchPredictor/SaturatingCounter.sv
./rtl/branchPredictor/BTB.sv
./rtl/branchPredictor/BHT.sv
# Top-level wrapper
./pipelinedCpu_top.sv
# Testbench

        ./tb/performanceCounter.sv
        ./tb/performanceTB.sv
./tb/functionalTB.sv