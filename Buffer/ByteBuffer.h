/*
 * =================================================================
 *
 *            Filename:    ByteBuffer.h
 *
 *         Description:    the ByteBuffer class is used to cache the 
 *                         byte data.
 *             Version:    
 *             Created:    2015-01-05 17:38
 *           Reversion:    none
 *            Compiler:    g++
 *            
 *              Author:    wangjin, 836792834@qq.com
 * 
 * ==================================================================
 */
#ifndef BYTEBUFFER_H_
#define BYTEBUFFER_H_

#include <sys/types.h>
#include "AbstractBuffer.h"

class ByteBuffer: public AbstractBuffer{
public:
    ByteBuffer():m_pBuffer(NULL){ }
    virtual ~ByteBuffer(){ } 

public:
    /* *
     * allocate the space of the buffer
     * 
     * @param size [in]
     *
     * @return error code
     */
    virtual int allocate( size_t size );

    /* *
     * get and set funtion of the four attribute
     */
    virtual int getCapacity()const;

    virtual int getPosition()const;
    virtual int setPosition( int &newPosition );
    
    virtual int getLimit()const;
    virtual int setLimit( int &newLimit );

    virtual int reset();
    virtual int clear();
    virtual int flip();
    virtual int rewind();
    
    virtual bool hasRemaining();
    virtual bool isReadOnly();

    virtual int freeBuffer();

public:
    int get( char &a );

    int set( char a );
    int set( char *buf, int size );

private:
    char *m_pBuffer;
};

#endif
