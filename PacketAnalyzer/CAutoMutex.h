// класс-оболочка, создающий и удал€ющий мютекс (Windows)
class CAutoMutex
{
	// дескриптор создаваемого мютекса
	HANDLE m_h_mutex;

	// запрет копировани€
	CAutoMutex(const CAutoMutex&);
	CAutoMutex& operator=(const CAutoMutex&);

public:
	CAutoMutex()
	{
		m_h_mutex = CreateMutex(NULL, FALSE, NULL);
		assert(m_h_mutex);
	}

	~CAutoMutex() { CloseHandle(m_h_mutex); }

	HANDLE get() { return m_h_mutex; }
};

*This source code was highlighted with Source Code Highlighter.