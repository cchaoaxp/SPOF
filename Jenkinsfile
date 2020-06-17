pipeline {
  agent any
  stages {
    stage('master') {
      steps {
        git(url: 'https://github.com/cchaoaxp/SPOF.git', branch: 'master')
      }
    }

    stage('QtBuild') {
      post {
        success {
          archiveArtifacts 'QtBuild/Makefile'
        }

      }
      steps {
        sh './buildScript.sh'
      }
    }

    stage('Qt Unit Test') {
      post {
        always {
          junit 'QtBuild/tests/testUpdateTime/*.xml'
        }

      }
      steps {
        sh '''echo "JENKINS_HOME is: $JENKINS_HOME"
echo "PATH is: $PATH"
tool name: \'Xvfb\', type: \'org.jenkinsci.plugins.xvfb.XvfbInstallation\'
./testScript.sh'''
      }
    }

  }
}