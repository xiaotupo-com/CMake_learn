#pragma once

class BoolTest {
public:
    BoolTest() {
    }

    // 把私有属性放到类的最后面
private:
    bool m_bl{false};
    int m_size{0};
};