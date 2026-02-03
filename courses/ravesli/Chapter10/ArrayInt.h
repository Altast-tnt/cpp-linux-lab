#pragma once
#include <iostream>
#include <cassert> // для assert()
#include <initializer_list> // для std::initializer_list

class ArrayInt
{
private:
	int m_length;
	int *m_data;

public:
	ArrayInt() :
		m_length(0), m_data(nullptr)
	{
	}

	ArrayInt(int length) :
		m_length(length)
	{
		m_data = new int[length];
	}

	ArrayInt(const std::initializer_list<int> &list): // позволяем инициализацию ArrayInt через список инициализации
		ArrayInt(list.size()) // используем концепцию делегирования конструкторов для создания начального массива, в который будет выполняться копирование элементов
	{
		// Инициализация нашего начального массива значениями из списка инициализации
		int count = 0;
		for (auto &element : list)
		{
			m_data[count] = element;
			++count;
		}
	}

	~ArrayInt()
	{
		delete[] m_data;
		// Нам не нужно здесь присваивать значение null для m_data или выполнять m_length = 0, так как объект будет уничтожен сразу же после выполнения этой функции
	}

	int& operator[](int index)
	{
		assert(index >= 0 && index < m_length);
		return m_data[index];
	}

	int getLength() { return m_length; }

	ArrayInt& operator=(const std::initializer_list<int> &list)
	{
        int length = list.size();
        if (length != m_length)
        {
            delete[] m_data;
            m_length = length;
            m_data = new int[m_length];
        }


        int count = 0;
        for (auto element : list)
        {
            m_data[count] = element;
            ++count;
        }
        return *this;
	}
};
