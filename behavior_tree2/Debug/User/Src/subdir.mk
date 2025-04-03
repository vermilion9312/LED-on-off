################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../User/Src/behavior_tree_config.c \
../User/Src/button.c \
../User/Src/led.c \
../User/Src/root.c 

OBJS += \
./User/Src/behavior_tree_config.o \
./User/Src/button.o \
./User/Src/led.o \
./User/Src/root.o 

C_DEPS += \
./User/Src/behavior_tree_config.d \
./User/Src/button.d \
./User/Src/led.d \
./User/Src/root.d 


# Each subdirectory must supply rules for building sources it contributes
User/Src/%.o User/Src/%.su User/Src/%.cyclo: ../User/Src/%.c User/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F407xx -c -I../Core/Inc -I../User/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-User-2f-Src

clean-User-2f-Src:
	-$(RM) ./User/Src/behavior_tree_config.cyclo ./User/Src/behavior_tree_config.d ./User/Src/behavior_tree_config.o ./User/Src/behavior_tree_config.su ./User/Src/button.cyclo ./User/Src/button.d ./User/Src/button.o ./User/Src/button.su ./User/Src/led.cyclo ./User/Src/led.d ./User/Src/led.o ./User/Src/led.su ./User/Src/root.cyclo ./User/Src/root.d ./User/Src/root.o ./User/Src/root.su

.PHONY: clean-User-2f-Src

