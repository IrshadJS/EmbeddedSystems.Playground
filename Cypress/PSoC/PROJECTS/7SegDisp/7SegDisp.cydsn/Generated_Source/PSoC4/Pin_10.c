/*******************************************************************************
* File Name: Pin_10.c  
* Version 2.5
*
* Description:
*  This file contains API to enable firmware control of a Pins component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "Pin_10.h"

#define SetP4PinDriveMode(shift, mode)  \
    do { \
        Pin_10_PC =   (Pin_10_PC & \
                                (uint32)(~(uint32)(Pin_10_DRIVE_MODE_IND_MASK << (Pin_10_DRIVE_MODE_BITS * (shift))))) | \
                                (uint32)((uint32)(mode) << (Pin_10_DRIVE_MODE_BITS * (shift))); \
    } while (0)


/*******************************************************************************
* Function Name: Pin_10_Write
********************************************************************************
*
* Summary:
*  Assign a new value to the digital port's data output register.  
*
* Parameters:  
*  prtValue:  The value to be assigned to the Digital Port. 
*
* Return: 
*  None 
*  
*******************************************************************************/
void Pin_10_Write(uint8 value) 
{
    uint8 drVal = (uint8)(Pin_10_DR & (uint8)(~Pin_10_MASK));
    drVal = (drVal | ((uint8)(value << Pin_10_SHIFT) & Pin_10_MASK));
    Pin_10_DR = (uint32)drVal;
}


/*******************************************************************************
* Function Name: Pin_10_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to one of the following drive modes.
*
*  Pin_10_DM_STRONG     Strong Drive 
*  Pin_10_DM_OD_HI      Open Drain, Drives High 
*  Pin_10_DM_OD_LO      Open Drain, Drives Low 
*  Pin_10_DM_RES_UP     Resistive Pull Up 
*  Pin_10_DM_RES_DWN    Resistive Pull Down 
*  Pin_10_DM_RES_UPDWN  Resistive Pull Up/Down 
*  Pin_10_DM_DIG_HIZ    High Impedance Digital 
*  Pin_10_DM_ALG_HIZ    High Impedance Analog 
*
* Return: 
*  None
*
*******************************************************************************/
void Pin_10_SetDriveMode(uint8 mode) 
{
	SetP4PinDriveMode(Pin_10__0__SHIFT, mode);
}


/*******************************************************************************
* Function Name: Pin_10_Read
********************************************************************************
*
* Summary:
*  Read the current value on the pins of the Digital Port in right justified 
*  form.
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value of the Digital Port as a right justified number
*  
* Note:
*  Macro Pin_10_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 Pin_10_Read(void) 
{
    return (uint8)((Pin_10_PS & Pin_10_MASK) >> Pin_10_SHIFT);
}


/*******************************************************************************
* Function Name: Pin_10_ReadDataReg
********************************************************************************
*
* Summary:
*  Read the current value assigned to a Digital Port's data output register
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value assigned to the Digital Port's data output register
*  
*******************************************************************************/
uint8 Pin_10_ReadDataReg(void) 
{
    return (uint8)((Pin_10_DR & Pin_10_MASK) >> Pin_10_SHIFT);
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(Pin_10_INTSTAT) 

    /*******************************************************************************
    * Function Name: Pin_10_ClearInterrupt
    ********************************************************************************
    *
    * Summary:
    *  Clears any active interrupts attached to port and returns the value of the 
    *  interrupt status register.
    *
    * Parameters:  
    *  None 
    *
    * Return: 
    *  Returns the value of the interrupt status register
    *  
    *******************************************************************************/
    uint8 Pin_10_ClearInterrupt(void) 
    {
		uint8 maskedStatus = (uint8)(Pin_10_INTSTAT & Pin_10_MASK);
		Pin_10_INTSTAT = maskedStatus;
        return maskedStatus >> Pin_10_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 


/* [] END OF FILE */
