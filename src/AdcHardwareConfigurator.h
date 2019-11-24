#ifndef _ADCHARDWARECONFIGURATOR_H
#define _ADCHARDWARECONFIGURATOR_H

#include "Types.h"

void Adc_ConfigureMode(void);
void Adc_EnableTemperatureChannel(void);

#ifdef DUMMY
void Adc_ResetDummy(void);
#else
void Adc_Reset(void);
#endif

#endif // _ADCHARDWARECONFIGURATOR_H
