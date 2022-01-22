# push_swap

Что тут происходит?

1)После заполнения стека А списком чисел и всех проверок на валидность(дубликаты, максимальный и минимальный int, наличие не числовых значений) если в списке больше трех чисел, кидаем их в стек Б, пока в стеке А не останеться всего 3 числа.

2)Сортируем стек А, то есть три числа. Число в топе стека становиться минимальным, число в конце стека - максимальным.

3)Теперь нужно вернуть числа из стека А в стек Б, но уже на правильные позиции. Тут несколько условий:

- если1 число из стека Б меньше минимального, просто делаем pa. Определяем это число как минимальное.
- если2 число из стека Б больше максимального, просто делаем pa. Определяем это число как максимальное.
- если3 число из стека Б НЕ больше максимального и НЕ меньше минимального, мы определяем позицию числа в стеке А, которое больше числа из стека Б и делаем pa над ним (перед этим крутим стек А).

ОДНАКО! НЕ ВСЕ ТАК ПРОСТО! При если3, чтобы уложиться в небольшое количество операций, нам нужно вычислить, для какого числа из стека Б нам потребуется наименьшее количество операций чтобы сделать pa. После того, как мы нашли это число и запушили его, необходимо снова пройтись по стеку Б в поисках нового числа с минимальным количеством операций, и т. д. пока длина стека Б != 0.

4)Небольшое количество операций получается за счет вычислений в пользу операций rr, rrr. Просчитываем, сколько раз нужно крутить оба стека и в какую сторону, если количества одинаковых операций в обоих стеках совпадает, делаем одновременные прокрутки, затем пушим.
Все, удачи:)
