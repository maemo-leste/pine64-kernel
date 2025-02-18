#ifndef RK818_BATTERY
#define RK818_BATTERY

#include <linux/power_supply.h>

struct rk818_battery;

struct rk818_battery;

int rk818_battery_get_property(struct rk818_battery *di,
			       enum power_supply_property psp,
			       union power_supply_propval *val);
struct rk818_battery* rk818_battery_get(void);
struct rk818_battery* rk818_battery_get(void);

#endif
