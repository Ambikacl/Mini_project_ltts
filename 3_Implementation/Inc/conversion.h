/**
 * @file conversion.h
 * @author Ambika C L
 * @brief Header files for temp,length,weight,numsystem and percentage function
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __CONVERSION_H__
#define __CONVERSION_H__
/**
 * @brief Funtion for temperature conversion from one form of unit to another form of unit
 * 
 * @param[in] ch
 * @param[in] num 
 * @return void result of temperature conversion
 */
void temp(int ch,float num);

/**
 * @brief Funtion for length conversion from one form of unit to another form of unit
 * 
 * @param[in] ch
 * @param[in] num 
 * @return void result of length conversion
 */
void length(int ch,float num);

/**
 * @brief Funtion for weight conversion from one form of unit to another form of unit.
 * 
 * @param[in] ch
 * @param[in] num 
 * @return void result of weight conversion
 */
void weight(int ch,float num);

/**
 * @brief Funtion for conversion of one number to another number system
 * 
 * @param[in] ch
 * @param[in] num1 
 * @return void result of number system conversion
 */
void numsys(int ch,int num1);
/**
 * @brief Funtion to calucuate percentage
 * 
 * @param[in] ch
 * @param[in] num1 
 * @return void result percentage
 */
void percentage(int ch,int num1);

#endif  /* __CONVERSION_H__  */