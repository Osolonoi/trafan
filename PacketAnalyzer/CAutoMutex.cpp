#include "CAutoMutex.h"

// класс-оболочка, создающий и удал€ющий рекурсивный мютекс (Unix)
class CAutoMutex
{
	pthread_mutex_t m_mutex;

	CAutoMutex(const CAutoMutex&);
	CAutoMutex& operator=(const CAutoMutex&);

public:
	CAutoMutex()
	{
		pthread_mutexattr_t attr;
		pthread_mutexattr_init(&attr);
		pthread_mutexattr_settype(&attr, PTHREAD_MUTEX_RECURSIVE);
		pthread_mutex_init(&m_mutex, &attr);
		pthread_mutexattr_destroy(&attr);
	}
	~CAutoMutex()
	{
		pthread_mutex_destroy(&m_mutex);
	}
	pthread_mutex_t& get()
	{
		return m_mutex;
	}
};

*This source code was highlighted with Source Code Highlighter.