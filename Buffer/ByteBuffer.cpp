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
