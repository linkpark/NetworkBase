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

class AbstractBuffer{
public:
    virtual int capacity() = 0;

    virtual int getPosition()const = 0;
    virtual int setPosition( int &newPosition ) = 0;
    
    virtual int getLimit()const = 0;
    virtual int setLimit( int &newLimit ) = 0;

    virtual int reset() = 0;
    virtual int clear() = 0;
    virtual int flip() = 0;
    virtual int rewind() = 0;
    
    virtual bool hasRemaining() = 0;
    virtual bool isReadOnly() = 0;

protected:
    /*A buffer should cantain this four attribute,
     * to provide the data message*/
    int m_iCapacity;
    int m_iLimit;
    int m_iPosition;
    int m_iMark;
};

#endif

