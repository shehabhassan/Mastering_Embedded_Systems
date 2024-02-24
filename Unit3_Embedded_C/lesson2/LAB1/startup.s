@@ Eng. shehab hassan 

.globl reset
reset:
       ldr sp, = stack_top
       bl main
stop:  b stop    