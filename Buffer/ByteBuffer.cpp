/*
 * =================================================================
 *
 *            Filename:    ByteBuffer.cpp
 *
 *         Description:    ByteBuffer class implement 
 *
 *             Version:    
 *             Created:    2015-01-05 17:44
 *           Reversion:    none
 *            Compiler:    g++
 *            
 *              Author:    wangjin, 836792834@qq.com
 * 
 * ==================================================================*/

#include <stdlib.h>
#include "ByteBuffer.h"
#include "ErrorCode.h"

int ByteBuffer::allocate( size_t size ){
    if( size <= 0){
        return PARAM_ERROR;
    }

    m_pBuffer = static_cast<char*>( malloc( size ) );
    if( NULL == m_pBuffer)
        return MEMERY_MALLOCERROR;
    
    return SUCCESSFUL;
}

int ByteBuffer::getCapacity()const{
    return m_Capacity;
}

int ByteBuffer::getPosition()const{
    return m_Position;
}

int ByteBuffer::setPosition( int &newPosition ){
    if( newPosition > m_Limit ) {
        return PARAM_ERROR;
    }
    
    m_Position = newPosition;

    return SUCCESSFUL;
}

int ByteBuffer::getLimit()const{
    return m_Limit;
}

int ByteBuffer::setLimit( int &newLimit){
    if( newLimit > m_Capacity ) {
        return PARAM_ERROR;
    }

    m_Limit = newLimit;

    return SUCCESSFUL;
}


