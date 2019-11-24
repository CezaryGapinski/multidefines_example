#include "Types.h"
#include "AdcHardware.h"
#include "AdcHardwareConfigurator.h"
#include "AdcTemperatureSensor.h"

void AdcHardware_Init(void)
{
  #ifdef DUMMY
  Adc_ResetDummy();
  #else
  Adc_Reset();
  #endif
  Adc_ConfigureMode();
  Adc_EnableTemperatureChannel();
  Adc_StartTemperatureSensorConversion();
}

void AdcHardware_StartConversion(void)
{
  Adc_StartTemperatureSensorConversion();
}

bool AdcHardware_GetSampleComplete(void)
{
  return Adc_TemperatureSensorSampleReady();
}

uint16 AdcHardware_GetSample(void)
{
  return Adc_ReadTemperatureSensor();
}
