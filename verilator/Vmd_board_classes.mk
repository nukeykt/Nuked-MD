# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vmd_board.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vmd_board \
	Vmd_board___024root__DepSet_h47be595a__0 \
	Vmd_board___024root__DepSet_hea6f6acc__0 \
	Vmd_board___024root__DepSet_hea6f6acc__1 \
	Vmd_board___024root__DepSet_hea6f6acc__2 \
	Vmd_board___024root__DepSet_hea6f6acc__3 \
	Vmd_board___024root__DepSet_hea6f6acc__4 \
	Vmd_board___024root__DepSet_hea6f6acc__5 \
	Vmd_board___024root__DepSet_hea6f6acc__6 \
	Vmd_board___024root__DepSet_hea6f6acc__7 \
	Vmd_board___024root__DepSet_hea6f6acc__8 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vmd_board__ConstPool_0 \
	Vmd_board___024root__Slow \
	Vmd_board___024root__DepSet_h47be595a__0__Slow \
	Vmd_board___024root__DepSet_hea6f6acc__0__Slow \
	Vmd_board___024root__DepSet_hea6f6acc__1__Slow \
	Vmd_board___024root__DepSet_hea6f6acc__2__Slow \
	Vmd_board___024root__DepSet_hea6f6acc__3__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vmd_board__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
