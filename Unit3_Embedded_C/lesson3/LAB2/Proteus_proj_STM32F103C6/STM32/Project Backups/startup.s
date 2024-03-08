/*
  First startup file for ARM-Cortex M3 
  Eng Shahab Hassan 
*/

/* RAM : 0x20000000 */ 

.section .vectors

.word  0x20001000         /* Top of stack address */
.word  _reset             /*1  Reset Handler */
.word  Vector_handler     /*2  NMI Handler */
.word  Vector_handler     /*3  Hard Fault Handler */
.word  Vector_handler     /*4  MemManage Handler */
.word  Vector_handler     /*5  BusFault Handler */
.word  Vector_handler     /*6  UsageFault Handler */
.word  Vector_handler     /*7  Reserved */
.word  Vector_handler     /*8  Reserved */
.word  Vector_handler     /*9  Reserved */
.word  Vector_handler     /*10 Reserved */
.word  Vector_handler     /*11 SVCall Handler */
.word  Vector_handler     /*12 Debug Monitor Handler */
.word  Vector_handler     /*13 Reserved */
.word  Vector_handler     /*14 PendSV Handler */
.word  Vector_handler     /*15 SysTick Handler */
.word  Vector_handler     /*16 IRQ0 */
.word  Vector_handler     /*17 IRQ1 */
.word  Vector_handler     /*18 IRQ2 */
.word  Vector_handler     /*18 IRQ2 */


.section .text
_reset:
    bl main
    b .

.thumb_func          /* for make 16 bit and 32 bit archtucture work*/
Vector_handler:      /* for vector hundelar */
    b _reset
    


