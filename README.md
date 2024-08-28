# PX4 Drone Autopilot - For MAGICC LAB MAVSIM ROS WRAPPING
 ## Purpose
 This project's usage of the public repo differ in two ways from the instructions in ```Making a Private Clone of a Public Repo.pdf```:

1. The main branch of PX4/PX4-Autopilot is actually "main", and not "master".
2. This project uses a public copy of the repository, and not a private one.

## Differences
This clone of PX4/PX4-Autopilot will differ in, at most, 4 ways from the current branch:

1. The ```src/modules/uxrce_dds_client/dds_topice.yaml``` file includes other PX4 topics being published, which capability, as of August 28, PX4 added to their documentation,
2. The ```README.md``` will only reflect the needs of my version of the project; the original will be deleted.
3. If proven possible, uORB topics will be altered such that $\alpha$ (angle of attack) and multiple other airspeed sensors can be read by the Pixhawk.
4. The ```Making a Private Clone of a Public Repo.pdf``` is added for instruction on how to set up and use this repository(credit to BYU for making the presentation).

