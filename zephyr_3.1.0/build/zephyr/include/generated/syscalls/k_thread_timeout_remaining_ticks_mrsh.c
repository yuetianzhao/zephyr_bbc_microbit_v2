/* auto-generated by gen_syscalls.py, don't edit */

#include <syscalls/kernel.h>

extern k_ticks_t z_vrfy_k_thread_timeout_remaining_ticks(const struct k_thread * t);
uintptr_t z_mrsh_k_thread_timeout_remaining_ticks(uintptr_t arg0, uintptr_t arg1, uintptr_t arg2,
		uintptr_t arg3, uintptr_t arg4, uintptr_t arg5, void *ssf)
{
	_current->syscall_frame = ssf;
	(void) arg2;	/* unused */
	(void) arg3;	/* unused */
	(void) arg4;	/* unused */
	(void) arg5;	/* unused */
	union { uintptr_t x; const struct k_thread * val; } parm0;
	parm0.x = arg0;
	k_ticks_t ret = z_vrfy_k_thread_timeout_remaining_ticks(parm0.val);
	Z_OOPS(Z_SYSCALL_MEMORY_WRITE(((uint64_t *)arg1), 8));
	*((uint64_t *)arg1) = ret;
	_current->syscall_frame = NULL;
	return 0;
}

