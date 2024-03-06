Это — ветка для сборки через CMake. Вариант для сборки через Make находится в ветке "make".

## Запуск (C++)
- Float: <code>cmake -D USE_FLOAT=ON -B ./build && make -C ./build && ./build/task1 && rm -rf ./build</code>
- Double: <code>cmake -D USE_FLOAT=OFF -B ./build && make -C ./build && ./build/task1 && rm -rf ./build</code>

## Прибл. результат (C++)
- Float: <code>-0.02778621949255466461</code>
- Double: <code>0.00000000004895819655</code>