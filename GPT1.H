#ifndef _GPT1_H_
#define _GPT1_H_

#define GPT1_TIMER_2 T2
#define GPT1_TIMER_3 T3
#define GPT1_TIMER_4 T4


void GPT1_vInit(void);

#define GPT1_vLoadTmr(TimerNr, Value) TimerNr = Value

#define T2INT 0x22


#endif  // ifndef _GPT1_H_
