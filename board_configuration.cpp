#include "pch.h"

Gpio getCommsLedPin() {
	return Gpio::B7;
}

Gpio getRunningLedPin() {
	return Gpio::Unassigned;
}

Gpio getWarningLedPin() {
	return Gpio::Unassigned;
}

// board-specific configuration setup
void setBoardDefaultConfiguration() {

	engineConfiguration->injectionPins[0] = Gpio::B15;
	engineConfiguration->injectionPins[1] = Gpio::B14;
	engineConfiguration->injectionPins[2] = Gpio::B12;
	engineConfiguration->injectionPins[3] = Gpio::B13;
	engineConfiguration->injectionPins[4] = Gpio::A8;
	engineConfiguration->injectionPins[5] = Gpio::E7;
	
	engineConfiguration->ignitionPins[0] = Gpio::E2;
	engineConfiguration->ignitionPins[1] = Gpio::E3;
	engineConfiguration->ignitionPins[2] = Gpio::C13;
	engineConfiguration->ignitionPins[3] = Gpio::E6;
	engineConfiguration->ignitionPins[4] = Gpio::E4;
	engineConfiguration->ignitionPins[5] = Gpio::E5;

	// SPI1 AUX
	engineConfiguration->is_enabled_spi_1 = true;
	engineConfiguration->max31855spiDevice = SPI_DEVICE_1;
	engineConfiguration->max31855_cs[0] = Gpio::E1;
	engineConfiguration->spi1mosiPin = Gpio::B5;
	engineConfiguration->spi1misoPin = Gpio::B4;
	engineConfiguration->spi1sckPin = Gpio::B3;

        //SPI3 SD card
	engineConfiguration->isSdCardEnabled = true;
	engineConfiguration->is_enabled_spi_3 = true;
	engineConfiguration->sdCardSpiDevice = SPI_DEVICE_3;
	engineConfiguration->spi3mosiPin = Gpio::C12;
	engineConfiguration->spi3misoPin = Gpio::C11;
	engineConfiguration->spi3sckPin = Gpio::C10;
	engineConfiguration->sdCardCsPin = Gpio::D2;
	engineConfiguration->sdCardLogFrequency = 20;

	//engineConfiguration->ignitionMode = IM_INDIVIDUAL_COILS;
	//engineConfiguration->crankingInjectionMode = IM_SEQUENTIAL;
	//engineConfiguration->injectionMode = IM_SEQUENTIAL;

	//CAN bus overwrites
        engineConfiguration->canWriteEnabled = true;
	engineConfiguration->canReadEnabled = true;
	engineConfiguration->canSleepPeriodMs = 50;
	engineConfiguration->canBaudRate = B500KBPS;
	
	//Bias resistor
	engineConfiguration->clt.config.bias_resistor = 2490;
	engineConfiguration->iat.config.bias_resistor = 2490;

	//Analog calc
        engineConfiguration->analogInputDividerCoefficient = 1.55f;
        engineConfiguration->vbattDividerCoeff = (7.47f / 1.0f);
        engineConfiguration->adcVcc = 3.12f;

        //Map and baro sensor
	engineConfiguration->map.sensor.type = MT_MPXH6400;
	engineConfiguration->baroSensor.type = MT_MPXH6400;

	//Digital out
	engineConfiguration->boostControlPin = Gpio::D8;
	engineConfiguration->fanPin = Gpio::E9;
	engineConfiguration->tachOutputPin = Gpio::E8;
	engineConfiguration->fuelPumpPin = Gpio::E11;

	//Input pin
	//engineConfiguration->vehicleSpeedSensorInputPin = Gpio::B6;
	engineConfiguration->triggerInputPins[0] = Gpio::D3;
	engineConfiguration->camInputs[0] = Gpio::D4;

	// Idle configuration
        engineConfiguration->useStepperIdle = false;
        engineConfiguration->isDoubleSolenoidIdle = true;
        engineConfiguration->idle.solenoidPin = Gpio::D9;
        engineConfiguration->secondSolenoidPin = Gpio::D10;

	//Analog
	engineConfiguration->clt.adcChannel = EFI_ADC_1;
	engineConfiguration->iat.adcChannel = EFI_ADC_0;
	engineConfiguration->tps1_1AdcChannel = EFI_ADC_2;
	engineConfiguration->vbattAdcChannel = EFI_ADC_4;
	engineConfiguration->map.sensor.hwChannel = EFI_ADC_3;
	
}
