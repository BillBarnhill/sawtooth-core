1. Choose whether you want the stable version (recommended) or the most recent
   nightly build (for testing purposes only).

   * (Release 1.1 and later) To add the stable repository, run these commands in
     a terminal window on your host system.

     .. code-block:: console

        $ sudo apt-key adv --keyserver hkp://keyserver.ubuntu.com:80 --recv-keys 8AA7AF1F1091A5FD
        $ sudo add-apt-repository 'deb [arch=amd64] http://repo.sawtooth.me/ubuntu/bumper/stable xenial universe'

     .. note::

        The ``bumper`` metapackage includes the Sawtooth core software and
        associated items such as separate consensus software.

   * The latest version of Sawtooth is available in a repository of nightly
     builds. These builds may incorporate undocumented features and should be
     used for testing purposes only.

     To use the nightly repository, run the following commands in a terminal
     window on your host system.

     .. code-block:: console

        $ sudo apt-key adv --keyserver hkp://keyserver.ubuntu.com:80 --recv-keys 44FC67F19B2466EA
        $ sudo apt-add-repository 'deb [arch=amd64] http://repo.sawtooth.me/ubuntu/nightly xenial universe'

#. Update your package lists.

   .. code-block:: console

      $ sudo apt-get update

#. Install the Sawtooth packages. Sawtooth consists of several Ubuntu packages
   that can be installed together using the ``sawtooth`` meta-package. Run the
   following command:

   .. code-block:: console

      $ sudo apt-get install -y sawtooth

#. Install a Sawtooth consensus engine package.

   * For PBFT:

     .. code-block:: console

        $ sudo apt-get install -y sawtooth sawtooth-pbft-engine

   * For PoET:

     .. code-block:: console

        $ sudo apt-get install -y sawtooth python3-sawtooth-poet-engine

   .. tip::
   
      Any time after installation, you can view the installed Sawtooth packages
      with the following command:

      .. code-block:: console

         $ dpkg -l '*sawtooth*'

