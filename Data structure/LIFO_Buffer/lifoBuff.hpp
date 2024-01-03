
/**
 *        ---------- <LIFO BUFFER> ----------
 * THIS IS A HEADER FILE OF A ``LIFO BUFFER`` DATA STRUCTURE
 *  AIMED TO CREATE A BUFFER AND DO OPERATIONS RELATIED
 * 
 * @file: lifoBuff.hpp
 * @author: mustafasayed
 * 
*/

#ifndef __LIFO_BUFF__
#define __LIFO_BUFF__

#include <cstdint> // for c++ language
// #include <stdint.h> // for c language

/*
 *       <LIFO Buffer struct>
 *     ...Members:
 *                  + length -> uint32_t
 *                  + *base  -> uint8_t
 *                  + *head  -> uint8_t
 *     
 *     ...interfaces(behavior):
 *                  + isFull()
 *                  + add()
 *                  + pop()
 *                  
*/ 

enum LB_Status
{
    LB_No_ERROR = 0 ,
    LB_FULL,
    LB_NOT_FULL,
    LB_EMPTY,
    LB_NOT_EMPTY,
    LB_NULL,    
};

struct LIFO_Buf_t
{
    //Attributes
    uint32_t length;
    uint8_t *base;
    uint8_t *head;

    //Interfaces
    LB_Status Is_Buff_FUll(LIFO_Buf_t* lbuf);
    LB_Status LIFO_Add_Item (LIFO_Buf_t* lbuf , uint8_t item);

};

/*struct interfaces definitions
--------------------------------------------------------------*/
/** check if poiners are not valid (equal null) - or (if buffer is initialized!)
 *  @brief: function to check if buffer is full or not 
 *  @param: lbuf - LIFO_Buf_t*
 *  @return: LB_Status
*/
LB_Status LIFO_Buf_t::Is_Buff_FUll(LIFO_Buf_t* lbuf)
{
    //check if poiners are not valid (equal null) - or (if buffer is initialized!)
    if ( !lbuf || !lbuf->base || !lbuf->head )
        return LB_NULL; 

    //check if head is at end ( buffer is full)
    if ( lbuf->head >= ( lbuf->base + lbuf->length ) )
        return LB_FULL;
    
    else
        return LB_NOT_FULL;
    
}

/** check if poiners are not valid (equal null) - or (if buffer is initialized!)
 *  @brief: function to check if buffer is full or not 
 *  @param: lbuf - LIFO_Buf_t*
 *  @return: LB_Status
*/
LB_Status LIFO_Add_Item (LIFO_Buf_t* lbuf ,  uint8_t item)
{
    //check if poiners are not valid (equal null)
    if ( !lbuf || !lbuf->base || !lbuf->head )
        return LB_NULL; 

     //check if poiners are not valid (equal null)
     if ( lbuf->Is_Buff_FUll(lbuf) == LB_FULL )
        return LB_FULL;
    
    //push data
    *(lbuf->head++) = item;
    // lbuf->head++;
    
    return LB_No_ERROR;
}

//--------------------------------------------------------------

#endif /* __LIFO_BUFF__*/