/*
 @module: LED
 @author: Abdullah Bagyapan
 @date:   17/04/2024
*/



/*================================== Defined Variables ==================================*/


#define LED_PIN                     PICO_DEFAULT_LED_PIN

#define LED_LEVEL_HIGH              1
#define LED_LEVEL_LOW               0


/*================================== Functions ==================================*/


/*
 @brief:  Initialize led

 @author  Abdullah Bagyapan

 @date    17/04/2024

 @details Reset LED, set pin as output

 @param   None

 @return  None
*/
void LED_Init(void);



/*
 @brief:  Turn on led

 @author  Abdullah Bagyapan

 @date    17/04/2024

 @param   None

 @return  None
*/
void LED_On(void);



/*
 @brief:  Turn off led

 @author  Abdullah Bagyapan

 @date    17/04/2024

 @param   None

 @return  None
*/
void LED_Off(void);