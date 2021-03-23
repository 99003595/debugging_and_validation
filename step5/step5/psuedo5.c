#include <linux/slap.h>
#include<linux/kfifo.h>
unsigned char *pbuffer;
#define MAX_SIZE 1024
struct kfifo kfifo;
//pseudo_init
pbuffer=kmalloc(MAX_SIZE, GFP_KERNEL);
kfifo_init(&kfifo, pbuffer);
//kfifo_alloc(&kfifo, MAX_SIZE, GFP_KERNEL);
//pseudo_exit
Kfifo_free(kfifo);N
//Write method:-
if(kfifo_is_full(&myfifo))
{
printk("buffer is full\n");     
 return -ENOSPC;  
}  
 wcount = size;  
if(wcount > kfifo_avail(&myfifo);)
wcount = kfifo_avail(&myfifo);      //min
char *tbuf=kmalloc(wcount, GFP_KERNEL);
ret=copy_from_user(ubuf, tbuf, wcount);
//error handling if copy_form_user
kfifo_in(&myfifo, tbuf, wcount);
kfree(tbuf);
//Read method:-
if(kfifo_is_empty(&myfifo)) {
printk("buffer is empty\n");       
return 0;   } 
rcount = size;   
if(rcount > kfifo_len(&myfifo))
rcount = kfifo_len(&myfifo);      //min
tbuf= kmalloc(rcount, GFP_KERNEL); 
kfifo_out(&myfifo, tbuf, rcount);
ret=copy_to_user(ubuf, tbuf);
//error handling
kfree(tbuf);
