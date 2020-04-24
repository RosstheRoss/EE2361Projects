#ifndef CIRCBUFF_H
#define	CIRCBUFF_H

#include <xc.h> // include processor files - each processor file is guarded.  


#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */
void putVal(int newValue);  // add a new value to the buffer
int getAvg();               // average all buffer vals
void initBuffer();          // set all buffer vals to zero
    
#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif

