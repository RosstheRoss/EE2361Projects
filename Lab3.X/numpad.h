#ifndef NUMPAD_H
#define	NUMPAD_H

#include <xc.h> // include processor files - each processor file is guarded.  

#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */

  // Insert declarations
    void initKeyPad(void);
    unsigned int readKeyPadRAW(void);

#ifdef	__cplusplus
}
#endif

#endif