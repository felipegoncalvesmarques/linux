/*
 *  procfs1.c -  create a "file" in /proc
 *
 */

#include <linux/module.h>       // Needed by all modules
#include <linux/kernel.h>       // KERN_INFO
#include <linux/sched.h>        // for_each_process, pr_info
#include <linux/sched/signal.h>
#include <linux/sched/task.h>

#define MEMINFO_FILE "/proc/meminfo"

void print_hello(void) {
    struct task_struct *task;
    for_each_process(task) {
        printk(KERN_INFO "PID = %d\n", task->pid);
    }
}
