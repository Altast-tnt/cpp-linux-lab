#pragma once

class Average
{
private:
    int32_t m_sum = 0;
    int8_t m_count = 0;

public:
    Average()
    {
    }

    Average& operator+=(int a);
    friend std::ostream& operator<<(std::ostream& out, Average& av);

};
