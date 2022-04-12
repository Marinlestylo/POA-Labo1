#include "shuttle.hpp"

TransporterCharacteristic Shuttle::characteristic(
	"Lambda-class shuttle", 54, 360, 80
);

Shuttle::Shuttle(double load) : Transporter(
	characteristic.nextId(), load, &characteristic
), load(load) {}


double Shuttle::getWeight() const {
	return characteristic.getWeight() + load;
}
