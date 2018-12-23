#include <linux/module.h>
#include <linux/sched.h>
#include <asm/thread_info.h>
MODULE_LICENSE("GPL");

int init_module(void){
	struct task_struct *cur=current;
	printk(KERN_INFO "State:%lu\nPid:%d\nProcess stack adress:%p\n",cur->state,cur->pid, cur->stack);
	return 0;
}

void cleanup_module(void){
	printk(KERN_INFO "Bye!\n");
}
