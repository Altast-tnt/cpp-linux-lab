#include <iostream>

unsigned int inputPositiveNumber()
{
    unsigned int x{256};
    do
    {
        std::cout << "Enter a number between 0 and 255: ";
        std::cin >> x;
    } while (x > 255);
    return x;
}

std::string isFinishAnswer(unsigned int x)
{
    switch(x)
    {
        case 128:
            return "10000000";
            break;
        case 64:
            return "01000000";
            break;
        case 32:
            return "00100000";
            break;
        case 16:
            return "00010000";
            break;
        case 8:
            return "00001000";
            break;
        case 4:
            return "00000100";
            break;
        case 2:
            return "00000010";
            break;
        case 1:
            return "00000001";
            break;
        case 0:
            return "00000000";
            break;
        default:
            return "0";
            break;
    }
}

void convertToBinary(unsigned int x)
{
    std::string answer = "";
    std::string finishAnswer = isFinishAnswer(x);
    if (finishAnswer == "0")
    {
        if (x >= 128) { answer += "1"; x -= 128; } else { answer += "0"; }
        if (x >= 64)  { answer += "1"; x -= 64;  } else { answer += "0"; }
        if (x >= 32)  { answer += "1"; x -= 32;  } else { answer += "0"; }
        if (x >= 16)  { answer += "1"; x -= 16;  } else { answer += "0"; }
        if (x >= 8)   { answer += "1"; x -= 8;   } else { answer += "0"; }
        if (x >= 4)   { answer += "1"; x -= 4;   } else { answer += "0"; }
        if (x >= 2)   { answer += "1"; x -= 2;   } else { answer += "0"; }
        if (x >= 1)   { answer += "1"; x -= 1;   } else { answer += "0"; }
        std::cout << "The answer is: " << answer << std::endl;
    } else
    {
        std::cout << "The answer is: " << finishAnswer << std::endl;
    }
}
