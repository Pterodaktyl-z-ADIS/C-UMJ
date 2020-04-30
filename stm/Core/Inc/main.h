/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define BUTTON_BLUE_Pin GPIO_PIN_13
#define BUTTON_BLUE_GPIO_Port GPIOC
#define BATTERY_Pin GPIO_PIN_0
#define BATTERY_GPIO_Port GPIOC
#define LCD_DC_Pin GPIO_PIN_1
#define LCD_DC_GPIO_Port GPIOC
#define LCD_CE_Pin GPIO_PIN_2
#define LCD_CE_GPIO_Port GPIOC
#define LCD_RST_Pin GPIO_PIN_3
#define LCD_RST_GPIO_Port GPIOC
#define ENC_R_A_Pin GPIO_PIN_0
#define ENC_R_A_GPIO_Port GPIOA
#define ENC_R_B_Pin GPIO_PIN_1
#define ENC_R_B_GPIO_Port GPIOA
#define ENC_L_A_Pin GPIO_PIN_6
#define ENC_L_A_GPIO_Port GPIOA
#define ENC_L_B_Pin GPIO_PIN_7
#define ENC_L_B_GPIO_Port GPIOA
#define MOTOR_R_DIR_Pin GPIO_PIN_4
#define MOTOR_R_DIR_GPIO_Port GPIOC
#define VL_XSDN3_Pin GPIO_PIN_5
#define VL_XSDN3_GPIO_Port GPIOC
#define VL_INT3_Pin GPIO_PIN_2
#define VL_INT3_GPIO_Port GPIOB
#define VL_SCL_Pin GPIO_PIN_10
#define VL_SCL_GPIO_Port GPIOB
#define VL_SDA_Pin GPIO_PIN_11
#define VL_SDA_GPIO_Port GPIOB
#define VL_INT2_Pin GPIO_PIN_12
#define VL_INT2_GPIO_Port GPIOB
#define VL_XSDN2_Pin GPIO_PIN_13
#define VL_XSDN2_GPIO_Port GPIOB
#define GYRO_CS_A_G_Pin GPIO_PIN_14
#define GYRO_CS_A_G_GPIO_Port GPIOB
#define GYRO_CS_M_Pin GPIO_PIN_15
#define GYRO_CS_M_GPIO_Port GPIOB
#define MOTOR_R_EN_Pin GPIO_PIN_6
#define MOTOR_R_EN_GPIO_Port GPIOC
#define MOTOR_L_EN_Pin GPIO_PIN_7
#define MOTOR_L_EN_GPIO_Port GPIOC
#define VL_INT1_Pin GPIO_PIN_8
#define VL_INT1_GPIO_Port GPIOC
#define VL_XSDN1_Pin GPIO_PIN_9
#define VL_XSDN1_GPIO_Port GPIOC
#define LCD_BL_Pin GPIO_PIN_8
#define LCD_BL_GPIO_Port GPIOA
#define MOTOR_R_PWM_Pin GPIO_PIN_9
#define MOTOR_R_PWM_GPIO_Port GPIOA
#define MOTOR_L_PWM_Pin GPIO_PIN_10
#define MOTOR_L_PWM_GPIO_Port GPIOA
#define GYRO_DEN_A_G_Pin GPIO_PIN_11
#define GYRO_DEN_A_G_GPIO_Port GPIOA
#define GYRO_INT1_A_G_Pin GPIO_PIN_12
#define GYRO_INT1_A_G_GPIO_Port GPIOA
#define BLUETOOTH_TX_Pin GPIO_PIN_10
#define BLUETOOTH_TX_GPIO_Port GPIOC
#define BLUETOOTH_RX_Pin GPIO_PIN_11
#define BLUETOOTH_RX_GPIO_Port GPIOC
#define BLUETOOTH_LED_Pin GPIO_PIN_12
#define BLUETOOTH_LED_GPIO_Port GPIOC
#define MOTOR_L_DIR_Pin GPIO_PIN_3
#define MOTOR_L_DIR_GPIO_Port GPIOB
#define BUTTON2_Pin GPIO_PIN_4
#define BUTTON2_GPIO_Port GPIOB
#define BUTTON1_Pin GPIO_PIN_5
#define BUTTON1_GPIO_Port GPIOB
#define GYRO_SCL_Pin GPIO_PIN_6
#define GYRO_SCL_GPIO_Port GPIOB
#define GYRO_SDA_Pin GPIO_PIN_7
#define GYRO_SDA_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
