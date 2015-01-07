/*
 * =================================================================
 *
 *            Filename:    AbstractBuffer.h
 *
 *         Description:    the base class of the buffer family
 *                      define the interface of the buffer
 *
 *             Version:    v1.0
 *             Created:    2014-12-30 20:15
 *           Reversion:    none
 *            Compiler:    g++
 *            
 *              Author:    wangjin, 836792834@qq.com
 * 
 * ==================================================================
 */
#ifndef ABSTRACTBUFFER_H_
#define ABSTRACTBUFFER_H_

#include <sys/types.h>

class AbstractBuffer{
public:
    AbstractBuffer():m_Mark(-1),m_Limit(-1),
        m_Capacity(-1),m_Position(-1){ }

    virtual ~AbstractBuffer(){ }

public:
    /* *
     * allocate the space of the buffer
     * 
     * @param size [in]
     *
     * @return error code
     */
    virtual int allocate( size_t size ) = 0;

    /* *
     * get and set funtion of the four attribute
     */
    virtual int getCapacity()const = 0;

    virtual int getPosition()const = 0;
    virtual int setPosition( int &newPosition ) = 0;
    
    virtual int getLimit()const = 0;
    virtual int setLimit( int &newLimit ) = 0;

    virtual int clear() = 0;
    virtual int flip() = 0;
    
    virtual bool hasRemaining() = 0;

    virtual int freeBuffer() = 0;

protected:
    /*A buffer should cantain this four attribute,
     * to provide the data message*/
    int m_Capacity;
    int m_Limit;
    int m_Position;
    int m_Mark;
};

#endif

