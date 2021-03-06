#ifndef DMA_H
#define DMA_H

#ifdef  __cplusplus
extern "C"
{
#endif



#include "cmsis_os2.h"



/*****************************************************************************/
/*                      PUBLIC FUNCTIONS PROTOTYPES                          */
/*****************************************************************************/

void DMA2_Clock_Config(void);
void DMA2_USART1_RX_Config(void);
void DMA2_USART1_TX_Config(void);
void DMA2_USART1_TX_SendFeedbackMessage(void *objectAddress,
                                        size_t objectSize);

osMessageQueueId_t GetQueueHandleForLed2Task(void);



/*****************************************************************************/
/*                           RTOS TASK PROTOTYPE                             */
/*****************************************************************************/

void StartDma2Usart1RxTask(void *argument);



#ifdef  __cplusplus
}
#endif
 
#endif  /* DMA_H */
