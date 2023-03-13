	.file	"main.c"
	.intel_syntax noprefix
 # GNU C17 (x86_64-win32-seh-rev0, Built by MinGW-W64 project) version 8.1.0 (x86_64-w64-mingw32)
 #	compiled by GNU C version 8.1.0, GMP version 6.1.2, MPFR version 4.0.1, MPC version 1.1.0, isl version isl-0.18-GMP

 # GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
 # options passed:  -imultilib .
 # -iprefix C:/Program Files/x86_64-8.1.0-release-win32-seh-rt_v6-rev0/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/8.1.0/
 # -U_REENTRANT main.c -m32 -masm=intel -mtune=core2 -march=nocona
 # -fverbose-asm
 # options enabled:  -faggressive-loop-optimizations
 # -fasynchronous-unwind-tables -fauto-inc-dec -fchkp-check-incomplete-type
 # -fchkp-check-read -fchkp-check-write -fchkp-instrument-calls
 # -fchkp-narrow-bounds -fchkp-optimize -fchkp-store-bounds
 # -fchkp-use-static-bounds -fchkp-use-static-const-bounds
 # -fchkp-use-wrappers -fcommon -fdelete-null-pointer-checks
 # -fdwarf2-cfi-asm -fearly-inlining -feliminate-unused-debug-types
 # -ffp-int-builtin-inexact -ffunction-cse -fgcse-lm -fgnu-runtime
 # -fgnu-unique -fident -finline-atomics -fira-hoist-pressure
 # -fira-share-save-slots -fira-share-spill-slots -fivopts
 # -fkeep-inline-dllexport -fkeep-static-consts -fleading-underscore
 # -flifetime-dse -flto-odr-type-merging -fmath-errno -fmerge-debug-strings
 # -fpeephole -fplt -fprefetch-loop-arrays -freg-struct-return
 # -fsched-critical-path-heuristic -fsched-dep-count-heuristic
 # -fsched-group-heuristic -fsched-interblock -fsched-last-insn-heuristic
 # -fsched-rank-heuristic -fsched-spec -fsched-spec-insn-heuristic
 # -fsched-stalled-insns-dep -fschedule-fusion -fsemantic-interposition
 # -fset-stack-executable -fshow-column -fshrink-wrap-separate
 # -fsigned-zeros -fsplit-ivs-in-unroller -fssa-backprop -fstdarg-opt
 # -fstrict-volatile-bitfields -fsync-libcalls -ftrapping-math
 # -ftree-cselim -ftree-forwprop -ftree-loop-if-convert -ftree-loop-im
 # -ftree-loop-ivcanon -ftree-loop-optimize -ftree-parallelize-loops=
 # -ftree-phiprop -ftree-reassoc -ftree-scev-cprop -funit-at-a-time
 # -funwind-tables -fverbose-asm -fzero-initialized-in-bss -m32 -m80387
 # -m96bit-long-double -maccumulate-outgoing-args -malign-double
 # -malign-stringops -mcx16 -mfancy-math-387 -mfp-ret-in-387 -mfxsr
 # -mieee-fp -mlong-double-80 -mmmx -mms-bitfields -mno-red-zone -mno-sse4
 # -mpush-args -msahf -msse -msse2 -msse3 -mstack-arg-probe -mstackrealign
 # -mvzeroupper

	.text
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "i = %d\12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
	push	ebp	 #
	mov	ebp, esp	 #,
	and	esp, -16	 #,
	sub	esp, 48	 #,
 # main.c:4: int main() {
	call	___main	 #
 # main.c:5:     int arr[3] = {1, 2, 3};
	mov	DWORD PTR [esp+24], 1	 # arr,
	mov	DWORD PTR [esp+28], 2	 # arr,
	mov	DWORD PTR [esp+32], 3	 # arr,
 # main.c:7:     int i = 5;
	mov	DWORD PTR [esp+44], 5	 # i,
 # main.c:8:     int j = 10;
	mov	DWORD PTR [esp+40], 10	 # j,
 # main.c:9:     i = arr[2];
	mov	eax, DWORD PTR [esp+32]	 # tmp89, arr
	mov	DWORD PTR [esp+44], eax	 # i, tmp89
 # main.c:10:     p = arr;
	lea	eax, [esp+24]	 # tmp90,
	mov	DWORD PTR [esp+36], eax	 # p, tmp90
 # main.c:11:     printf("i = %d\n", i);
	mov	eax, DWORD PTR [esp+44]	 # tmp91, i
	mov	DWORD PTR [esp+4], eax	 #, tmp91
	mov	DWORD PTR [esp], OFFSET FLAT:LC0	 #,
	call	_printf	 #
 # main.c:12:     return 0;
	mov	eax, 0	 # _10,
 # main.c:13: }
	leave	
	ret	
	.ident	"GCC: (x86_64-win32-seh-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
