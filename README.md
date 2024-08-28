# PX4 Drone Autopilot - For MAGICC LAB MAVSIM ROS WRAPPING
 ## Differences with Repo setup from IncludedInstructions
 This project's usage of the public repo differ in three ways from the instructions in ```Making a Private Clone of a Public Repo.pdf```:

1. The main branch of PX4/PX4-Autopilot is actually "main", and not "master".
2. This project uses a public copy of the repository, and not a private one.
3. The PX4 library must have the --recursive tag added to it when cloned in, to initialize and update any git submodules.

If the user needs to make a new fork as per the instructions in the pdf and forgot to add the --recursive tag when cloning in the PX4 library:
1. In the /PX4-Autopilot directory:
```git submodule init```
2. ```git submodule update```

OR, skipping steps 1. and 2.: ```git submodule update --init --recursive```


## Differences with PX4/PX4-Autopilot
This clone of PX4/PX4-Autopilot will differ in, at most, 4 ways from the current branch:

1. The ```src/modules/uxrce_dds_client/dds_topice.yaml``` file includes other PX4 topics being published, which capability, as of August 28, PX4 added to their documentation,
2. The ```README.md``` will only reflect the needs of my version of the project; the original will be deleted.
3. If proven possible, uORB topics will be altered such that $\alpha$ (angle of attack) and multiple other airspeed sensors can be read by the Pixhawk.
4. The ```Making a Private Clone of a Public Repo.pdf``` is added for instruction on how to set up and use this repository(credit to BYU for making the presentation).

