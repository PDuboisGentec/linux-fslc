struct io_pin {
	int reset_gpio, pwdn_gpio, ref_gpio;
};

struct sensor_i2cdata_array {
	struct i2c_client *i2c_client;
	struct io_pin iopins;
};



