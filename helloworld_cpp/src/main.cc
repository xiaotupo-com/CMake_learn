#include <fmt/color.h>
#include <fmt/core.h>

#include "point.hpp"
#include "static_data_members.hpp"

void displayPoint(const Point &p) {
    cout << "(" << p.x << "," << p.y << ")" << endl;
}

int main(void) {
    displayPoint(Point(10, 20));
    Point p(1, 3);
    displayPoint(p);
    Point p1{1, 1};
    displayPoint(p1);
    Point p2(p);
    displayPoint(p2);

    BufferedOutput::ResetCount();
    for (int i = 0; i < 100; i++) { BufferedOutput::CountINC(); }
    auto sdmVar = BufferedOutput::BytesWritten();
    cout << "sdmVar: " << sdmVar << endl;

    // 闭包 Lambda 例子
    int lambda_a{10};
    float lambda_c{0.1f};
    auto lambda_func1 = [lambda_a, &lambda_c](float x) -> float {
        lambda_c *= x;
        fmt::println("lambda output: {}, {}", lambda_a, lambda_c);
        return lambda_c;
    };
    lambda_func1(12.23);

    // 闭包例子2
    auto lambda_func2 = [&, lambda_a](float x) {};
    auto lambda_func3 = [=, &lambda_c](float x) {};
    fmt::println("fmt.version: {}", FMT_VERSION);

    fmt::print(fg(fmt::color::crimson) | fmt::emphasis::bold, "Hello, {}!\n",
               "world");
    fmt::print(fg(fmt::color::floral_white) | bg(fmt::color::slate_gray) | fmt::emphasis::underline,
               "Olá, {}!\n", "Mundo");
    fmt::print(fg(fmt::color::steel_blue) | fmt::emphasis::italic, "你好{}！\n",
               "世界");

    // Lambda 3 闭包
    int lambda_d = 20;
    int lambda_n = 0;
    [&lambda_d, lambda_n](int x) mutable {
        for (int i = 0; i < 10; i++) { lambda_d = (++lambda_n) * x; }
    }(13);
    fmt::println("lambda_d: {}", lambda_d);
}
