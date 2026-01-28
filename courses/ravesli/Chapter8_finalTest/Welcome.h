#pragma once

class Welcome
{
private:
	char *m_data;

public:
	Welcome()
	{
		m_data = new char[14];
		const char *init = "Hello, World!";
		for (int i = 0; i < 14; ++i)
			m_data[i] = init[i];
	}

	~Welcome()
	{
        delete[] m_data;
	}

	void print() const;

};

