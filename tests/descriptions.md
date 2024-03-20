# Перечень тестов

# Метод int roots(double* result, double a, double b, double c);

## Тест №1.1 right_answer (позитивный)
- Цель: проверка корректности вычисления корней квадратного уравнения.
- Входные данные: a=1, b=-5, c=6.
- Ожидаемый результат: Корни уравнения x1=3, x2=2.
- Описание процесса: Вызов функции roots с заданными параметрами и проверка корректности вычисленных корней.

## Тест №1.2 float_input_float_out (позитивный)
- Цель: проверка корректности вычисления корней квадратного уравнения с вещественными коэффициентами.
- Входные данные: a=1, b=-4, c=3.75.
- Ожидаемый результат: Корни уравнения x1=2.5, x2=1.5.
- Описание процесса: Вызов функции roots с заданными параметрами и проверка корректности вычисленных корней.

## Тест №1.3 one_root (позитивный)
- Цель: проверка корректности вычисления корней квадратного уравнения с одним корнем.
- Входные данные: a=1, b=-6, c=9.
- Ожидаемый результат: Корни уравнения x1=x2=3.
- Описание процесса: Вызов функции roots с заданными параметрами и проверка корректности вычисленного корня.

## Тест №1.4 invalid_input (негативный)
- Цель: проверка обработки некорректных входных данных.
- Входные данные: a=0, b=2, c=3.
- Ожидаемый результат: Возвращается 0 (отсутствие корней).
- Описание процесса: Вызов функции roots с заданными параметрами и проверка возвращаемого значения.

## Тест №1.5 no_root (негативный)
- Цель: проверка обработки случая отсутствия действительных корней.
- Входные данные: a=1, b=2, c=3.
- Ожидаемый результат: Возвращается 0 (отсутствие корней).
- Описание процесса: Вызов функции roots с заданными параметрами и проверка возвращаемого значения.