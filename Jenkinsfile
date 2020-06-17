pipeline {
  agent any
  stages {
    stage('master') {
      steps {
        git(url: 'https://github.com/cchaoaxp/SPOF.git', branch: 'master')
      }
    }

    stage('QtBuild') {
      steps {
        sh './buildScript.sh'
      }
      post {
        success {
            archiveArtifacts 'QtBuild/Makefile'
        }
      }
    }

    stage('Qt Unit Test') {
      steps {
        sh './testScript.sh'
      }
      post {
        always {
            junit 'QtBuild/tests/testUpdateTime/*.xml'
        }
      }
    }
  }
}
