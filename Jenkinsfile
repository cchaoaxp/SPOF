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
    stage('QtUnitTest') {
      steps {
        wrap(delegate: [$class: 'Xvfb', additionalOptions: '', assignedLabels: '', autoDisplayName: true, debug: true, displayNameOffset: 0, installationName: 'XVFB', parallelBuild: true, screen: '1024x758x24', timeout: 25]) {
          sh './testScript.sh'
        }
      }
    }
  }
}
