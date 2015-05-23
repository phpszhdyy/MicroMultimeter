/* #include "api_waveForm.h" */

#ifndef __API_WAVEFORM_H
#define __API_WAVEFORM_H

#include "stm32f10x.h"
/*=====================================================================================================*/
/*=====================================================================================================*/
#define WaveChannelMax  3
#define WaveWindowX     0
#define WaveWindowY     6
#define WaveFormW       96
#define WaveFormH       48
/*=====================================================================================================*/
/*=====================================================================================================*/
typedef struct {
  uint8_t  Channel;
  int16_t  Data[WaveChannelMax];
  uint16_t Scale[WaveChannelMax];
  uint32_t PointColor[WaveChannelMax];
  uint32_t WindowColor;
  uint32_t BackColor;
} WaveForm_Struct;
/*=====================================================================================================*/
/*=====================================================================================================*/
void WaveFormInit( WaveForm_Struct *WaveForm );
void WaveFormPrint( WaveForm_Struct *WaveForm, uint8_t display );
/*=====================================================================================================*/
/*=====================================================================================================*/
#endif
