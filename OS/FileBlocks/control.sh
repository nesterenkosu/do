#!/bin/tcsh

echo "Введите ваш возраст"
set age = $<

if( $age < 18) then
    echo "Вам сюда нельзя"
else
    echo "Вам сюда можно"
endif
