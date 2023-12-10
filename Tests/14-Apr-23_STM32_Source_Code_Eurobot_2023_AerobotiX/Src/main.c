/* USER CODE BEGIN Header */
/**
  ****************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ****************************************************************************
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
  ****************************************************************************
  */
//hahalolnoob
//tabdilaaaaa
//yametekudasai
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "dma.h"
#include "tim.h"
#include "usart.h"
#include "gpio.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "Odometry.h"
#include "Robot_Navi_Euro20.h"
#include "Motors.h"
#include <stdbool.h>
#include <stmRos.h>

#include <stmRos.h>

extern int sum;
extern bool evitementFlag;
extern volatile float current_x;
extern volatile float current_y;
extern volatile float left_radius,right_radius,spacing_encoder,spacing_wheel;

extern float** matrix;
int taille;
extern float Vx;
extern float Vz;
float PWMR,PWML,PWM_linear,PWM_angular;
int PWM;
int PWM_Min=950;
extern uint32_t right_forward;
extern uint32_t right_backward;
extern uint32_t left_forward;
extern uint32_t left_backward;
extern TIM_HandleTypeDef* htim_Motors;

extern int right_correction,left_correction;
extern volatile float total_right,d_right_counter;
extern volatile float total_left,d_left_counter,total_centre;
extern int PWM_LB,PWM_RB;
extern int coef_correct_dist;
extern volatile long total_right_count;
extern volatile long total_left_count;
extern float test;

extern volatile float spacing_wheel;


double right_error1=0;
double i_right_error1=0;
double left_error1=0;
double i_left_error1=0;

extern float kp, ki;
float kpros=2, kiros=0;
extern volatile double left_speed,left_encoder_speed;
extern volatile double right_speed,right_encoder_speed;
extern volatile long t;
unsigned long long int delta=0,t0=0;
extern int PWM_L,PWM_R;
extern int i ;
extern char buf[64];

extern double v_rx ;
extern double omega_r ;


/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */
/* Private variables ---------------------------------------------------------*/

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
/* USER CODE BEGIN PFP */
/* Private function prototypes -----------------------------------------------*/

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

char uartBuf[100];

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */
	//uint32_t numTicks=0;

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_DMA_Init();
  MX_USART2_UART_Init();
  MX_TIM3_Init();
  MX_TIM4_Init();
  MX_TIM7_Init();
  MX_TIM1_Init();
  MX_TIM5_Init();
  /* USER CODE BEGIN 2 */
  //set_dimentions(40,40,290,195);//291.28//291.35//39.98,39.37


    //robot kbir
    set_dimentions(40.45,40.1,252.5,105.5);//40.36836,40.59922,265,120.2 ROBOT PRINCIPAL
        set_motors(&htim1,4499,TIM_CHANNEL_3,TIM_CHANNEL_4,TIM_CHANNEL_1,TIM_CHANNEL_2);
        set_right_encoder(&htim3,TIM3,400,4,-1);//400 ROBOT KBIR
        set_left_encoder(&htim4,TIM4,400,4,-1);
        HAL_TIM_Base_Start_IT(&htim7);
        set_PWM_min (200,200,200,200);


        setup();


        //orientate(0,500);
//        HAL_Delay(1000);
//
//        orientate(-90,500);
//        HAL_Delay(1000);
//
//        orientate(180,500);
//        HAL_Delay(1000);
//
//        orientate(90,500);
//        HAL_Delay(1000);
 // run_forward(1000, 1000);

  //rotate(360,100);
//  move_distance(1000,550);
// rotate(180,350);

 //  Robot_Locate(500, 500, 500);
//Robot_Locate(0, 1000, 500);

//HAL_Delay(100);
//ledblink();
 //move_distance(1000, 500);
 //HAL_Delay(100);
 //calcul_distance2();
 //HAL_Delay(100);
 //calculultrason();
 //HAL_Delay(400);
 //move_distance(300,600);
 //HAL_Delay(100);
 //calcul_distance2();
 //HAL_Delay(100);
 //calculultrason();
  //HAL_Delay(400);
 //move_distance(300, 600);
 //HAL_Delay(100);
 //calcul_distance2();
 //HAL_Delay(100);
 //calculultrason();
  //HAL_Delay(400);
 //move_distance(300, 600);
 //HAL_Delay(5000);
 //HAL_GPIO_WritePin(LED_GPIO_Port2, LED_Pin2, GPIO_PIN_RESET);
 /*HAL_GPIO_WritePin(LED_GPIO_Port1, LED_Pin1, GPIO_PIN_RESET);
 HAL_GPIO_WritePin(LED_GPIO_Port3, LED_Pin3, GPIO_PIN_RESET);
 move_distance(850, 600);
 rotate(90, 300);
 calcul_cube();
 rotate(91.5,400); // hethiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii 88
 move_distance(2020,600);
 rotate(90,500);
 //Robot_locateCurv(40, -460,90, 500);
 Robot_locateCurv(-10, -1000,85, 600);
 orientate(90,500);
 asta3(500, 300);
 //Robot_Locate_Multi_Curv(l, 2, 500);
 move_distance(-400,600);
 rotate(90,500);
 move_distance(640, 600);
 HAL_Delay(5000);
 move_distance(-640, 600);
 rotate(90,500);
 move_distance(660, 600);
 rotate(-90,500);move_distance(500,500);
 move_distance(1950, 600);
 rotate(-90,500);
 move_distance(1430, 600);
 rotate(-90,500);
 move_distance(1950, 600);
 //orientate(-90,300);
 //hez_cube();
 //move_distance(900, 500);
 //hot_cube();
  //move_distance(-430, 300);
 //orientate(0, 300);
 //move_distance(640, 500);
*/
// loop();
 	// run_forward(3000, 3000);
// 	HAL_Delay(1500);
 //      PWM_R=-4000;
 	//  PWM_L=4000;
 //	 	run_motors();
//	 	 HAL_Delay(5000);
// 	stop_motors();
// 	 	HAL_Delay(1500);
 	 //	PWM_R=2000;
	 //	 	 PWM_L=2000;
 	 	// run_motors();
// 	 	 	 HAL_Delay(1500);
// 	 	 	 stop_motors();
// 	 	 	HAL_Delay(1500);
//        		 PWM_R=2000;
// 	 	 	 	 PWM_L=-2000;
// 	 	 	 	 run_motors();
// 	 	 	 	 HAL_Delay(5000);
// 	 	 	 	 stop_motors();
// 	 	 	 	HAL_Delay(1500);
     //move_distance(500, 300);
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
	  //move_distance(500,500);
	 loop();
//	 HAL_Delay(5);//badel delay

    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */

	 //tasliiiiiiiii7
  }

  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE3);

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLM = 8;
  RCC_OscInitStruct.PLL.PLLN = 84;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 2;
  RCC_OscInitStruct.PLL.PLLR = 2;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK)
  {
    Error_Handler();
  }
}

/* USER CODE BEGIN 4 */
extern volatile long t;
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
	if (htim->Instance==TIM7) //check if the interrupt comes from TIM7
	{
		update_position();
		PWM_sign_change_counter();
		if (t%T == 0){
//				loop();
			speed_calcul();

		}

	}
}
/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */

  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     tex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
