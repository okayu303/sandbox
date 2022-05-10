constraint_setting(name = "color")

constraint_value(
  name = "blue",
  constraint_setting = ":color"
)

constraint_value(
  name = "red",
  constraint_setting = ":color"
)

platform(
  name = "blue_pf",
  constraint_values = [
    "@platforms//os:linux",
    "@platforms//cpu:x86_64",
    ":blue"
  ],
)

platform(
  name = "red_pf",
  constraint_values = [
    "@platforms//os:linux",
    "@platforms//cpu:x86_64",
    ":red"
  ],
)