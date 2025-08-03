#include <stdio.h>

// 定义状态枚举
typedef enum {
    RED,
    GREEN,
    YELLOW
} TrafficLightState;

// 函数声明
void updateState(TrafficLightState *state);

int main() {
    // 初始化状态
    TrafficLightState currentState = RED;
    
    // 模拟交通信号灯的状态变化
    for (int i = 0; i < 10; i++) {
        // 打印当前状态
        switch (currentState) {
            case RED:
                printf("Red light\n");
                break;
            case GREEN:
                printf("Green light\n");
                break;
            case YELLOW:
                printf("Yellow light\n");
                break;
        }
        
        // 更新状态
        updateState(&currentState);
    }
    
    return 0;
}

// 更新状态的函数
void updateState(TrafficLightState *state) {
    // 根据当前状态进行状态转移
    switch (*state) {
        case RED:
            *state = GREEN;
            break;
        case GREEN:
            *state = YELLOW;
            break;
        case YELLOW:
            *state = RED;
            break;
    }
}
